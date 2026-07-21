using System;
using CommunityToolkit.Mvvm.ComponentModel;
using CommunityToolkit.Mvvm.Input;
using tabliczka.Models;
using tabliczka.Services;

namespace tabliczka.ViewModels;

public partial class MainViewModel : ObservableObject {
    private readonly QuestionService _questionService;

    [ObservableProperty]
    private Question currentQuestion;

    [ObservableProperty]
    private string userAnswer;

    [ObservableProperty]
    private string resultMessage;

    [ObservableProperty]
    private int score;

    public MainViewModel() {
        _questionService = new QuestionService();

        LoadNewQuestion();
    }

    [RelayCommand]
    private void CheckAnswer() {
        if (int.TryParse(UserAnswer, out int answer)) {
            if (answer == CurrentQuestion.CorrectAnswer) {
                ResultMessage = "Dobrze!";
                Score++;
            }
            else {
                ResultMessage = "Źle!";
            }

            LoadNewQuestion();
            UserAnswer = string.Empty;
        }
        else {
            ResultMessage = "Podaj liczbę.";
        }
    }

    private void LoadNewQuestion() {
        CurrentQuestion = _questionService.GenerateQuestion();
    }
}
