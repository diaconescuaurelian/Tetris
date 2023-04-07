object Joc: TJoc
  Left = 635
  Top = 151
  Width = 630
  Height = 666
  Caption = 'Joc tetris'
  Color = clCream
  Constraints.MaxHeight = 666
  Constraints.MaxWidth = 630
  Constraints.MinHeight = 666
  Constraints.MinWidth = 630
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Visible = True
  PixelsPerInch = 96
  TextHeight = 13
  object btnStart: TButton
    Left = 424
    Top = 112
    Width = 89
    Height = 49
    Caption = 'Start Game'
    TabOrder = 0
    OnClick = btnStartClick
  end
  object btnPause: TButton
    Left = 520
    Top = 112
    Width = 89
    Height = 49
    Caption = 'Pause'
    TabOrder = 1
    OnClick = btnPauseClick
  end
  object btnAnPiece: TButton
    Left = 472
    Top = 216
    Width = 89
    Height = 49
    Caption = 'Another Piece'
    TabOrder = 2
    OnClick = btnAnPieceClick
  end
  object btnExit: TButton
    Left = 472
    Top = 8
    Width = 89
    Height = 49
    Caption = 'Exit'
    TabOrder = 3
    OnClick = btnExitClick
  end
  object Tabla: TDrawGrid
    Left = 8
    Top = 8
    Width = 409
    Height = 609
    Color = clGreen
    ColCount = 20
    DefaultColWidth = 19
    DefaultRowHeight = 19
    DefaultDrawing = False
    FixedCols = 0
    RowCount = 30
    FixedRows = 0
    ScrollBars = ssNone
    TabOrder = 4
    OnKeyDown = TablaKeyDown
  end
  object ceas: TTimer
    Enabled = False
    Interval = 800
    OnTimer = ceasTimer
    Left = 504
    Top = 552
  end
end
