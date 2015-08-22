/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBFIGConfigurable.h>
#import <Messenger/FBFIGThreadSafeSizable.h>

@protocol FBFacepileViewDelegate;
@class NSMutableArray, NSMutableSet, FBFIGTouchThroughScrollView, NSString;

@interface FBFacepileView : UIView <FBFIGConfigurable, FBFIGThreadSafeSizable> {

	NSMutableArray* _buttons;
	NSMutableArray* _downloads;
	NSMutableSet* _fetchedURLS;
	NSMutableArray* _overlayImageViews;
	FBFIGTouchThroughScrollView* _scrollView;
	struct {
		unsigned delegateDidFetchItemAtIndex : 1;
		unsigned delegateDidSelectItemAtIndex : 1;
	}  _delegateFlags;
	id<FBFacepileViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBFacepileViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultFIGConfig;
+(id)newWithConfig:(id)arg1 ;
+(CGSize)threadSafeSizeThatFits:(id)arg1 size:(CGSize)arg2 ;
+(CGSize)_sizeWithConstraint:(CGSize)arg1 config:(id)arg2 ;
+(FBFacepileViewLayout)_layoutWithConstraint:(double)arg1 config:(id)arg2 ;
+(CGSize)_sizeForNumberOfColumns:(unsigned long long)arg1 numberOfRows:(unsigned long long)arg2 itemSize:(CGSize)arg3 config:(id)arg4 ;
+(id)newWithImageDownloader:(id)arg1 items:(id)arg2 itemSize:(unsigned long long)arg3 maximumNumberOfItems:(unsigned long long)arg4 maximumNumberOfRows:(unsigned long long)arg5 ;
+(id)newWithImageDownloader:(id)arg1 items:(id)arg2 itemSize:(unsigned long long)arg3 itemStyle:(unsigned long long)arg4 maximumNumberOfItems:(unsigned long long)arg5 maximumNumberOfRows:(unsigned long long)arg6 ;
+(CGSize)sizeForFacepileItemSize:(unsigned long long)arg1 ;
+(double)_spacingForRowsOrSections:(unsigned long long)arg1 itemSpacing:(double)arg2 ;
+(id)newWithImageDownloader:(id)arg1 items:(id)arg2 itemSize:(unsigned long long)arg3 ;
+(void)initialize;
-(void)oldConfig:(id)arg1 configDidChange:(id)arg2 ;
-(CGSize)threadSafeSizeThatFits:(CGSize)arg1 ;
-(void)applyConfig:(id)arg1 ;
-(void)_configureButtonsState;
-(void)_layoutFacepileImageViews;
-(id)_configuredImage:(id)arg1 size:(CGSize)arg2 ;
-(void)_configureItemButtonOnView:(id)arg1 frame:(CGRect)arg2 index:(unsigned long long)arg3 item:(id)arg4 itemDefaultImage:(id)arg5 config:(id)arg6 ;
-(void)_configureOverlayImageViewOnView:(id)arg1 frame:(CGRect)arg2 item:(id)arg3 ;
-(void)_didTapOnFacepileViewButton:(id)arg1 ;
-(void)_didFetchItem:(id)arg1 atIndex:(long long)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<FBFacepileViewDelegate>)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBFacepileViewDelegate>)delegate;
-(id)_init;
-(id)config;
@end
