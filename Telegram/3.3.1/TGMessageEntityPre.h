//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGMessageEntity.h"

@class NSString;

@interface TGMessageEntityPre : TGMessageEntity
{
    NSString *_language;
}

@property(readonly, nonatomic) NSString *language; // @synthesize language=_language;
- (void).cxx_destruct;
- (void)encodeWithKeyValueCoder:(id)arg1;
- (id)initWithKeyValueCoder:(id)arg1;
- (id)initWithRange:(struct _NSRange)arg1 language:(id)arg2;

@end

