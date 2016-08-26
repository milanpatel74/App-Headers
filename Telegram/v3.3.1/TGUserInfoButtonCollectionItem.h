//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGCollectionItem.h"

@class NSString, UIColor;

@interface TGUserInfoButtonCollectionItem : TGCollectionItem
{
    SEL _action;
    _Bool _editing;
    UIColor *_titleColor;
    NSString *_title;
}

@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
- (void).cxx_destruct;
- (void)bindView:(id)arg1;
- (void)itemSelected:(id)arg1;
- (struct CGSize)itemSizeForContainerSize:(struct CGSize)arg1;
- (Class)itemViewClass;
- (id)initWithTitle:(id)arg1 action:(SEL)arg2;

@end
