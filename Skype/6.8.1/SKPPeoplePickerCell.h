//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSString, SKPImageBridgeViewController, SKPPeopleItemContentView;

@interface SKPPeoplePickerCell : UICollectionViewCell
{
    _Bool _showCheckmark;
    _Bool _disableUnauthorizedContacts;
    _Bool _preselected;
    _Bool _enabled;
    _Bool _enableObservation;
    _Bool _observe;
    _Bool _registered;
    SKPPeopleItemContentView *_itemContentView;
    SKPImageBridgeViewController *_imageController;
    id _viewModel;
    NSString *_highlightedText;
    NSString *_stringForPreselectedItems;
    long long _contentItemStyle;
    NSString *_placeholderIcon;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSString *placeholderIcon; // @synthesize placeholderIcon=_placeholderIcon;
@property(nonatomic, getter=isRegistered) _Bool registered; // @synthesize registered=_registered;
@property(nonatomic, getter=isObserving) _Bool observe; // @synthesize observe=_observe;
@property(nonatomic, getter=isObservationEnabled) _Bool enableObservation; // @synthesize enableObservation=_enableObservation;
@property(readonly, nonatomic) long long contentItemStyle; // @synthesize contentItemStyle=_contentItemStyle;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSString *stringForPreselectedItems; // @synthesize stringForPreselectedItems=_stringForPreselectedItems;
@property(nonatomic) _Bool preselected; // @synthesize preselected=_preselected;
@property(nonatomic) _Bool disableUnauthorizedContacts; // @synthesize disableUnauthorizedContacts=_disableUnauthorizedContacts;
@property(nonatomic) _Bool showCheckmark; // @synthesize showCheckmark=_showCheckmark;
@property(retain, nonatomic) NSString *highlightedText; // @synthesize highlightedText=_highlightedText;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateEnabledState;
- (void)updateDetailLabel;
- (void)updateAvatar;
- (void)updatePresence;
- (void)updateOverlay;
- (void)configureWithViewModel:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setBackgroundColor:(id)arg1;
- (void)addObservations;
- (void)updateObservationState;
- (void)didMoveToSuperview;
- (id)observedKeyPaths;
@property(readonly, nonatomic) SKPImageBridgeViewController *imageController; // @synthesize imageController=_imageController;
@property(readonly, nonatomic) SKPPeopleItemContentView *itemContentView; // @synthesize itemContentView=_itemContentView;
- (void)updateConstraints;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

