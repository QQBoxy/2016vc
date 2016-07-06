Public Class Form_Hello
    Private Sub Btn_Hello(sender As Object, e As EventArgs) Handles Button_Hello.Click
        Dim i = 0
        Dim j = 0
        Dim k = 0
        TextBox_Hello.Text = ""
        For j = 1 To 9
            For i = 1 To 9
                k = i * j
                TextBox_Hello.Text += Str(i) + " x " + Str(j) + " = " + Str(k) 'jxi=k
                If i Mod 9 = 0 Then
                    TextBox_Hello.Text += Chr(13) + Chr(10) '\r\n
                Else
                    TextBox_Hello.Text += Chr(9) '\t
                End If
            Next
        Next
    End Sub
End Class
