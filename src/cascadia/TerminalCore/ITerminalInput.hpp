/********************************************************
 *                                                       *
 *   Copyright (C) Microsoft. All rights reserved.       *
 *                                                       *
 ********************************************************/

#pragma once
namespace Microsoft::Terminal::Core
{
    class ITerminalInput
    {
    public:
        virtual ~ITerminalInput() {}

        virtual bool SendKeyEvent(const WORD vkey, const bool ctrlPressed, const bool altPressed, const bool shiftPressed) = 0;

        // void SendMouseEvent(uint row, uint col, KeyModifiers modifiers);
        virtual HRESULT UserResize(const COORD size) = 0;
        // void ScrollViewport(int offset);
        // int GetScrollOffset();

    };
}
