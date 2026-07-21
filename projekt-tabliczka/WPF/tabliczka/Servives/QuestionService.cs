using System;
using tabliczka.Models;

namespace tabliczka.Services;

public class QuestionService {
    private readonly Random _random = new();

    public Question GenerateQuestion() {
        return new Question {
            Number1 = _random.Next(1, 11),
            Number2 = _random.Next(1, 11)
        };
    }
}
