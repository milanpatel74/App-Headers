//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSCoding.h"

@class NSString;

@interface TGBotReplyMarkupButton : NSObject <PSCoding>
{
    NSString *_text;
}

@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithKeyValueCoder:(id)arg1;
- (id)initWithKeyValueCoder:(id)arg1;
- (id)initWithText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
