using System;

namespace tabliczka.Models;

public class Question {
    public int Number1 { get; set; }

    public int Number2 { get; set; }

    public int CorrectAnswer => Number1 * Number2;
}