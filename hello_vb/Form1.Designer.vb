<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form_Hello
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.Button_Hello = New System.Windows.Forms.Button()
        Me.TextBox_Hello = New System.Windows.Forms.TextBox()
        Me.SuspendLayout()
        '
        'Button_Hello
        '
        Me.Button_Hello.Location = New System.Drawing.Point(382, 168)
        Me.Button_Hello.Name = "Button_Hello"
        Me.Button_Hello.Size = New System.Drawing.Size(100, 23)
        Me.Button_Hello.TabIndex = 0
        Me.Button_Hello.Text = "Hello"
        Me.Button_Hello.UseVisualStyleBackColor = True
        '
        'TextBox_Hello
        '
        Me.TextBox_Hello.Location = New System.Drawing.Point(12, 12)
        Me.TextBox_Hello.Multiline = True
        Me.TextBox_Hello.Name = "TextBox_Hello"
        Me.TextBox_Hello.Size = New System.Drawing.Size(847, 140)
        Me.TextBox_Hello.TabIndex = 1
        '
        'Form_Hello
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 12.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(869, 209)
        Me.Controls.Add(Me.TextBox_Hello)
        Me.Controls.Add(Me.Button_Hello)
        Me.Name = "Form_Hello"
        Me.Text = "Form_Hello"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents Button_Hello As System.Windows.Forms.Button
    Friend WithEvents TextBox_Hello As System.Windows.Forms.TextBox

End Class
