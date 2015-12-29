//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSString, SKPPeopleItemContentView;

@interface SKPPeoplePickerSearchCell : UICollectionViewCell
{
    SKPPeopleItemContentView *_itemContentView;
    NSString *_searchText;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void).cxx_destruct;
- (_Bool)isAccessibilityElement;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)configureCell;
- (void)setBackgroundColor:(id)arg1;
@property(readonly, nonatomic) SKPPeopleItemContentView *itemContentView; // @synthesize itemContentView=_itemContentView;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

