//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 14 2013 08:30:39).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DictionaryRecord : NSObject
{
    struct __DCSRecord *_recordRef;
    NSString *_additionalAnchor;
    BOOL _guessed;
}

@property BOOL guessed; // @synthesize guessed=_guessed;
- (struct __DCSRecord *)_DCSRecordRef;
- (id)description;
- (id)contentsForStyle:(long long)arg1;
- (id)dataURLForStyle:(long long)arg1;
- (id)subDictionary;
- (id)parentDictionary;
- (id)dictionary;
- (id)anchor;
- (void)setAnchor:(id)arg1;
- (id)title;
- (id)rawHeadword;
- (void)setHeadword:(id)arg1;
- (id)headword;
- (id)keyword;
- (void)dealloc;
- (id)initWithDCSRecordRef:(struct __DCSRecord *)arg1;

@end
