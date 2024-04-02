object FereastraTetris: TFereastraTetris
  Left = 291
  Top = 127
  Width = 1044
  Height = 583
  Caption = 'FereastraTetris'
  Color = clAqua
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object tLabelLuck: TLabel
    Left = 24
    Top = 8
    Width = 217
    Height = 46
    Caption = 'Good Luck, '
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    Layout = tlCenter
  end
  object tLabelNume: TLabel
    Left = 232
    Top = 8
    Width = 77
    Height = 46
    Caption = 'user'
    Color = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
  end
  object dgGameGrid: TDrawGrid
    Left = 488
    Top = 8
    Width = 270
    Height = 530
    Color = cl3DDkShadow
    ColCount = 10
    DefaultColWidth = 25
    DefaultRowHeight = 25
    FixedCols = 0
    RowCount = 20
    FixedRows = 0
    TabOrder = 0
    OnKeyDown = dgGameGridKeyDown
    OnSelectCell = dgGameGridSelectCell
  end
  object Button1: TButton
    Left = 168
    Top = 112
    Width = 75
    Height = 25
    Caption = 'START'
    TabOrder = 1
    OnClick = Button1Click
  end
  object btnPauza: TButton
    Left = 168
    Top = 160
    Width = 75
    Height = 25
    Caption = 'PAUSE'
    TabOrder = 2
    OnClick = btnPauzaClick
  end
  object btnRestart: TButton
    Left = 168
    Top = 208
    Width = 75
    Height = 25
    Caption = 'RESTART'
    TabOrder = 3
    OnClick = btnRestartClick
  end
  object btnExitTetris: TButton
    Left = 168
    Top = 256
    Width = 75
    Height = 25
    Caption = 'EXIT'
    TabOrder = 4
    OnClick = btnExitTetrisClick
  end
  object tTime: TTimer
    Enabled = False
    Interval = 500
    OnTimer = tTimeTimer
    Left = 48
    Top = 96
  end
end
