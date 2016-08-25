//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class MKButton, MKGradientView, NSArray, NSMutableArray, SKPRepeatedLongTapBehavior, UIScrollView, UIView;

@interface SKPEmoticonPickerToolbarViewController : UIViewController
{
    _Bool _allowSearch;
    id <SKPEmoticonPickerToolbarDelegate> _delegate;
    NSArray *_pickerToolbarItems;
    CDUnknownBlockType _backspaceCallback;
    CDUnknownBlockType _searchCallback;
    unsigned long long _selectedButtonIndex;
    UIView *_topHairlineView;
    UIView *_itemsContainerView;
    UIScrollView *_scrollView;
    NSMutableArray *_packButtons;
    MKGradientView *_gradientView;
    UIView *_auxButtonsContainerView;
    MKButton *_backspaceButton;
    MKButton *_searchButton;
    SKPRepeatedLongTapBehavior *_repeatedDeleteBehavior;
}

@property(retain, nonatomic) SKPRepeatedLongTapBehavior *repeatedDeleteBehavior; // @synthesize repeatedDeleteBehavior=_repeatedDeleteBehavior;
@property(retain, nonatomic) MKButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) MKButton *backspaceButton; // @synthesize backspaceButton=_backspaceButton;
@property(retain, nonatomic) UIView *auxButtonsContainerView; // @synthesize auxButtonsContainerView=_auxButtonsContainerView;
@property(retain, nonatomic) MKGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) NSMutableArray *packButtons; // @synthesize packButtons=_packButtons;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *itemsContainerView; // @synthesize itemsContainerView=_itemsContainerView;
@property(retain, nonatomic) UIView *topHairlineView; // @synthesize topHairlineView=_topHairlineView;
@property(nonatomic) unsigned long long selectedButtonIndex; // @synthesize selectedButtonIndex=_selectedButtonIndex;
@property(nonatomic) _Bool allowSearch; // @synthesize allowSearch=_allowSearch;
@property(copy, nonatomic) CDUnknownBlockType searchCallback; // @synthesize searchCallback=_searchCallback;
@property(copy, nonatomic) CDUnknownBlockType backspaceCallback; // @synthesize backspaceCallback=_backspaceCallback;
@property(copy, nonatomic) NSArray *pickerToolbarItems; // @synthesize pickerToolbarItems=_pickerToolbarItems;
@property(nonatomic) __weak id <SKPEmoticonPickerToolbarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)buttonWasPressed:(id)arg1;
@property(nonatomic) unsigned long long selectedToolbarItemIndex;
- (void)hitSearchButton:(id)arg1;
- (void)viewDidLayoutSubviews;
- (_Bool)searchButtonIsVisible;
- (void)layoutAuxButtonContainer;
- (id)auxButtons;
- (void)commonInit;
- (void)updateScrollViewAttributes;
- (void)dealloc;
- (id)init;

@end
