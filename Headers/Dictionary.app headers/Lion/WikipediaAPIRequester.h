/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSURLConnectionDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary;

@interface WikipediaAPIRequester : NSObject <NSURLConnectionDelegate>
{
    id _delegate;
    SEL _didFinishSelector;
    NSMutableDictionary *_requests;
    NSMutableArray *_requestFormats;
    NSMutableArray *_receivedData;
    long long _remainCount;
    BOOL _canceled;
    double _logRequestTime;
    double _logResponseTime;
    double _logDonwloadTime;
}

- (void)dealloc;
- (void)requestWithQueries:(id)arg1 timeout:(double)arg2;
- (void)cancel;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)_finished;
@property(readonly) double logDonwloadTime; // @synthesize logDonwloadTime=_logDonwloadTime;
@property(readonly) double logResponseTime; // @synthesize logResponseTime=_logResponseTime;
@property SEL didFinishSelector; // @synthesize didFinishSelector=_didFinishSelector;
@property id delegate; // @synthesize delegate=_delegate;

@end

