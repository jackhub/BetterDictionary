/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WebView.h"

@interface DictionaryWebView : WebView
{
    BOOL _nowPrinting;
}

- (void)setFrameSize:(struct _NSSize)arg1;
- (void)printContentsInFrame:(id)arg1;
- (void)_printPanelDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;

@end

