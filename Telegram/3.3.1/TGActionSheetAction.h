//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TGActionSheetAction : NSObject
{
    int _type;
    NSString *_title;
    NSString *_action;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 action:(id)arg2 type:(int)arg3;
- (id)initWithTitle:(id)arg1 action:(id)arg2;

@end

