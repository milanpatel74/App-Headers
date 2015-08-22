/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Twitter/T1PhotoGalleryCellAction.h>

@class TFNTwitterMediaAsset, T1MediaAttachmentView, TFNBadgeView, UIView, UIButton, UILongPressGestureRecognizer, NSString;

@interface T1PhotoGalleryCell : UICollectionViewCell <UIGestureRecognizerDelegate, T1PhotoGalleryCellAction> {

	BOOL _enabled;
	BOOL _displaySelectedIndex;
	BOOL _depressed;
	unsigned long long _index;
	TFNTwitterMediaAsset* _mediaAsset;
	unsigned long long _selectedIndex;
	T1MediaAttachmentView* _previewView;
	TFNBadgeView* _badgeView;
	UIView* _selectionOutlineView;
	UIButton* _editButton;
	UILongPressGestureRecognizer* _longPressGesture;
	UILongPressGestureRecognizer* _holdGesture;
	NSString* _photoGalleryCheckmarkImageName;

}

@property (nonatomic,retain) TFNTwitterMediaAsset * mediaAsset;                            //@synthesize mediaAsset=_mediaAsset - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL displaySelectedIndex;                                    //@synthesize displaySelectedIndex=_displaySelectedIndex - In the implementation block
@property (assign,nonatomic) unsigned long long selectedIndex;                             //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,retain) T1MediaAttachmentView * previewView;                          //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,retain) TFNBadgeView * badgeView;                                     //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,retain) UIView * selectionOutlineView;                                //@synthesize selectionOutlineView=_selectionOutlineView - In the implementation block
@property (nonatomic,retain) UIButton * editButton;                                        //@synthesize editButton=_editButton - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGesture;              //@synthesize longPressGesture=_longPressGesture - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * holdGesture;                   //@synthesize holdGesture=_holdGesture - In the implementation block
@property (assign,nonatomic) BOOL depressed;                                               //@synthesize depressed=_depressed - In the implementation block
@property (nonatomic,readonly) NSString * photoGalleryCheckmarkImageName;                  //@synthesize photoGalleryCheckmarkImageName=_photoGalleryCheckmarkImageName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long type; 
@property (assign,nonatomic) unsigned long long index;                                     //@synthesize index=_index - In the implementation block
-(void)_didLongPress:(id)arg1 ;
-(NSString *)photoGalleryCheckmarkImageName;
-(void)_didHoldCell:(id)arg1 ;
-(void)_resetProperties;
-(void)_applyVisibleProperties;
-(UILongPressGestureRecognizer *)holdGesture;
-(UILongPressGestureRecognizer *)longPressGesture;
-(UIView *)selectionOutlineView;
-(void)_updateBadgeState;
-(TFNTwitterMediaAsset *)mediaAsset;
-(void)_setDepressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)displaySelectedIndex;
-(void)_fireNotification:(id)arg1 ;
-(void)setMediaAsset:(TFNTwitterMediaAsset *)arg1 ;
-(void)setDisplaySelectedIndex:(BOOL)arg1 ;
-(void)setDepressed:(BOOL)arg1 ;
-(void)setBadgeView:(TFNBadgeView *)arg1 ;
-(void)setSelectionOutlineView:(UIView *)arg1 ;
-(void)setEditButton:(UIButton *)arg1 ;
-(void)setLongPressGesture:(UILongPressGestureRecognizer *)arg1 ;
-(void)setHoldGesture:(UILongPressGestureRecognizer *)arg1 ;
-(BOOL)depressed;
-(void)setPreviewView:(T1MediaAttachmentView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(unsigned long long)type;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)prepareForReuse;
-(unsigned long long)selectedIndex;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
-(TFNBadgeView *)badgeView;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(T1MediaAttachmentView *)previewView;
-(void)_editButtonTapped:(id)arg1 ;
-(UIButton *)editButton;
@end
