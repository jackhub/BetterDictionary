/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Lookup/LUModule.h>

@class NSBezierPath, NSButton, NSTextField, WebPreferences, WebView;

@interface LUWebKitModule : LUModule
{
    WebView *_webView;
    NSTextField *_ellipsis;
    NSButton *_clickShield;
    WebPreferences *_webPreference;
    NSBezierPath *_truncateMask;
}

@property(retain) NSBezierPath *truncateMask; // @synthesize truncateMask=_truncateMask;
@property(retain) WebPreferences *webPreference; // @synthesize webPreference=_webPreference;
@property(retain) NSButton *clickShield; // @synthesize clickShield=_clickShield;
@property(retain) NSTextField *ellipsis; // @synthesize ellipsis=_ellipsis;
@property(retain) WebView *webView; // @synthesize webView=_webView;
- (void)unTruncateText;
- (void)truncateText;
- (void)setResultHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)animationDidEnd:(BOOL)arg1;
- (void)animationWillBegin:(BOOL)arg1;
- (void)adjustLayout;
- (struct CGSize)idealSize;
- (void)dealloc;
- (id)init;

@end
