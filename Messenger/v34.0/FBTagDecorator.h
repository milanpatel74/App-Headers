/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBKeyboardObserverDelegate.h>
#import <Messenger/FBZoomingPhotoViewDelegate.h>
#import <Messenger/FBPhotoTagGuideTagletDelegate.h>
#import <Messenger/FBFaceboxDecoratorDelegate.h>
#import <Messenger/FBTagSearchViewDelegate.h>
#import <Messenger/FBPhotoTagSuggestionDataSourceDelegate.h>
#import <Messenger/FBTagContainerViewDelegate.h>
#import <Messenger/FBNuxStepChainControllerDelegate.h>

@protocol UIScrollViewDelegate, FBTagDecoratorDelegate, FBAvatarTaggingSectionDataSource;
@class NSString, UIScrollView, FBTagContainerView, FBTagAggregator, UIView, FBKeyboardObserver, NSMutableSet, FBFaceboxDecorator, FBTagSearchView, FBPhotoTaglet, FBMemPhotoFaceBoxesEdge, FBNuxController, FBDelegateForwarder, FBPhotoTagSuggestionDataSource, FBUserSession, UIApplication;

@interface FBTagDecorator : NSObject <FBKeyboardObserverDelegate, FBZoomingPhotoViewDelegate, FBPhotoTagGuideTagletDelegate, FBFaceboxDecoratorDelegate, FBTagSearchViewDelegate, FBPhotoTagSuggestionDataSourceDelegate, FBTagContainerViewDelegate, FBNuxStepChainControllerDelegate> {

	UIScrollView* _hostView;
	FBTagContainerView* _tagContainerView;
	FBTagAggregator* _tagAggregator;
	UIView* _imageView;
	FBKeyboardObserver* _keyboardObserver;
	NSMutableSet* _allFaceboxesEdges;
	FBFaceboxDecorator* _faceboxDecorator;
	FBTagSearchView* _tagSearchView;
	FBPhotoTaglet* _selectedTaglet;
	FBMemPhotoFaceBoxesEdge* _selectedFaceboxesEdge;
	FBMemPhotoFaceBoxesEdge* _currentTagGuideFaceboxesEdge;
	FBNuxController* _nuxController;
	BOOL _hostScrollEnabled;
	BOOL _restoreImageView;
	BOOL _zoomViewManagePhotoViewLayout;
	BOOL _allowAutoTagging;
	CGSize _imageSize;
	CGPoint _hostContentOffset;
	CGSize _hostContentSize;
	CGRect _imageViewFrame;
	CGPoint _tagTapPoint;
	CGPoint _faceboxTapPoint;
	FBDelegateForwarder* _scrollDelegateForwarder;
	id<UIScrollViewDelegate> _scrollViewDelegate;
	FBPhotoTagSuggestionDataSource* _tagSuggestionDataSource;
	unsigned long long _maxRowsInSearchResultsPortrait;
	FBUserSession* _session;
	UIApplication* _application;
	BOOL _editable;
	BOOL _tagsVisible;
	BOOL _tagGuideEnabled;
	BOOL _faceboxEnabled;
	NSMutableSet* _allTaggableEdges;
	id<FBTagDecoratorDelegate> _delegate;
	unsigned long long _mode;
	id<FBAvatarTaggingSectionDataSource> _searchDataSource;
	NSString* _analyticsSessionID;

}

@property (assign,getter=isEditable,nonatomic) BOOL editable;                                    //@synthesize editable=_editable - In the implementation block
@property (nonatomic,readonly) NSMutableSet * allTaggableEdges;                                  //@synthesize allTaggableEdges=_allTaggableEdges - In the implementation block
@property (assign,nonatomic,__weak) id<FBTagDecoratorDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL tagsVisible;                                                   //@synthesize tagsVisible=_tagsVisible - In the implementation block
@property (getter=isTagging,nonatomic,readonly) BOOL tagging; 
@property (assign,nonatomic) BOOL tagGuideEnabled;                                               //@synthesize tagGuideEnabled=_tagGuideEnabled - In the implementation block
@property (assign,nonatomic) BOOL faceboxEnabled;                                                //@synthesize faceboxEnabled=_faceboxEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                            //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL faceboxesHidden; 
@property (nonatomic,retain) id<FBAvatarTaggingSectionDataSource> searchDataSource;              //@synthesize searchDataSource=_searchDataSource - In the implementation block
@property (nonatomic,copy) NSString * analyticsSessionID;                                        //@synthesize analyticsSessionID=_analyticsSessionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * tagAnalyticsModule; 
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)stepChainController:(id)arg1 didTransitionToStep:(id)arg2 ;
-(void)stepChainControllerDidCancel:(id)arg1 onStep:(id)arg2 ;
-(void)stepChainControllerDidEnd:(id)arg1 ;
-(void)zoomingPhotoViewDidLayoutSubviews:(id)arg1 ;
-(void)zoomingPhotoViewDidResetSize:(id)arg1 ;
-(BOOL)tagsVisible;
-(BOOL)faceboxesHidden;
-(void)setFaceboxesHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setTagsVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setTagsVisible:(BOOL)arg1 ;
-(void)setFaceboxesHidden:(BOOL)arg1 ;
-(void)resetAutoTagging;
-(void)dataSourceDidFinishFetchingResults:(id)arg1 ;
-(void)dataSource:(id)arg1 didSearchAvatars:(id)arg2 forText:(id)arg3 ;
-(NSString *)tagAnalyticsModule;
-(NSString *)analyticsSessionID;
-(id)excludeFBIDs;
-(void)tagGuideTagletDidAcceptTag:(id)arg1 ;
-(void)tagGuideTagletDidRejectTag:(id)arg1 ;
-(void)tagContainerViewDidLayoutSubviews:(id)arg1 ;
-(CGRect)_hostViewport;
-(CGRect)_imageRectInsideImageView;
-(void)_updateFaceSuggestionTagGuide;
-(void)_commitTagAggregatorWhenTagsVisibleWithAnimation:(unsigned long long)arg1 ;
-(void)setPhotoAssetID:(id)arg1 ;
-(void)removeTaggableEdge:(id)arg1 animated:(BOOL)arg2 ;
-(void)setSearchDataSource:(id<FBAvatarTaggingSectionDataSource>)arg1 ;
-(void)_updateTagSearchViewIndicatorAnimation;
-(void)_loadDataSource;
-(void)startNewTagAtTapPoint:(CGPoint)arg1 withKeyboard:(BOOL)arg2 preserveScrollEnabled:(BOOL)arg3 ;
-(void)faceboxDecorator:(id)arg1 didTapFaceboxesEdge:(id)arg2 ;
-(CGPoint)tapPointPercentageInImageView:(CGPoint)arg1 ;
-(void)_commitTagAggregatorWithAnimation:(unsigned long long)arg1 ;
-(void)relayoutTags;
-(void)_addTaggableEdgeForExactlyMatchedFacebox:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(CGPoint)tapPointInImageViewFromPercentage:(CGPoint)arg1 ;
-(void)_zoomOntoFaceboxEdge:(id)arg1 animated:(BOOL)arg2 ;
-(void)_prepareForFaceBoxZoom:(id)arg1 ;
-(void)_logTagEvent:(id)arg1 ;
-(void)moveAndZoomImageView:(CGRect)arg1 start:(/*^block*/id)arg2 animation:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 duration:(double)arg5 ;
-(id)_nextFaceboxesEdgeNextToCurrent:(id)arg1 passTest:(/*^block*/id)arg2 ;
-(BOOL)_tryRemoveTag:(id)arg1 animated:(BOOL)arg2 ;
-(void)_logTagTTIEventFromSource:(id)arg1 startTime:(unsigned long long)arg2 ;
-(void)_logTagEvent:(id)arg1 withFBID:(id)arg2 extra:(id)arg3 ;
-(void)_assertCurrentTagGuideFaceboxesEdge;
-(void)_selectNextTagGuideFaceboxesEdge;
-(void)_logTagEvent:(id)arg1 searchText:(id)arg2 numberOfResult:(long long)arg3 ;
-(void)setAnalyticsSessionID:(NSString *)arg1 ;
-(void)_addTagBlockForFaceRect:(CGRect)arg1 toAvatar:(id)arg2 name:(id)arg3 loggingSource:(id)arg4 startTime:(unsigned long long)arg5 ;
-(void)_removeSelectedFacebox:(id)arg1 ;
-(BOOL)_selectNextFaceboxIfExists;
-(void)_animateForKeyboardEndFrame:(CGRect)arg1 duration:(double)arg2 curve:(long long)arg3 ;
-(BOOL)isTagging;
-(void)_showFaceAlertsNUXIfNecessary;
-(void)addTaggableEdge:(id)arg1 animated:(BOOL)arg2 ;
-(CGPoint)tapPointOnScreen:(CGPoint)arg1 ;
-(float)desiredTagHeightForOrientation;
-(BOOL)_isUserAlreadyTagged:(id)arg1 ;
-(BOOL)_canShowFaceAlertsNUX;
-(void)didRemoveTaglet:(id)arg1 withTaggableEdge:(id)arg2 ;
-(void)didTapTaglet:(id)arg1 withTaggableEdge:(id)arg2 ;
-(void)tagSearchView:(id)arg1 searchTextDidChange:(id)arg2 ;
-(void)tagSearchView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)tagSearchViewWillAppear:(id)arg1 preserveScrollEnabled:(BOOL)arg2 ;
-(void)tagSearchViewWillDisappear:(id)arg1 animated:(BOOL)arg2 ;
-(void)tagSearchViewDidDisappear:(id)arg1 ;
-(void)didFinishTagEditing:(id)arg1 withAvatar:(id)arg2 loggingSource:(id)arg3 ;
-(id)initWithCarrierView:(id)arg1 delegate:(id)arg2 session:(id)arg3 allowAutoTagging:(BOOL)arg4 supportOrientationChange:(BOOL)arg5 ;
-(void)setCarrierView:(id)arg1 ;
-(void)setImageView:(id)arg1 imageSize:(CGSize)arg2 ;
-(void)setAllTaggableEdges:(id)arg1 animated:(BOOL)arg2 ;
-(void)setAllFaceboxesEdges:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissTagSearchAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)closeNUX;
-(void)showTapToTagLabelWithInterval:(double*)arg1 ;
-(BOOL)touchAtPoint:(CGPoint)arg1 ;
-(BOOL)hasTagAtPoint:(CGPoint)arg1 ;
-(void)setTagGuideEnabled:(BOOL)arg1 ;
-(void)addAutoTaggableEdge:(id)arg1 animated:(BOOL)arg2 ;
-(void)setImageViewAccessibilityTrait:(unsigned long long)arg1 ;
-(void)showFromTapOnFaceBoxForFaceBoxID:(id)arg1 animated:(BOOL)arg2 ;
-(NSMutableSet *)allTaggableEdges;
-(BOOL)tagGuideEnabled;
-(BOOL)faceboxEnabled;
-(void)setFaceboxEnabled:(BOOL)arg1 ;
-(id<FBAvatarTaggingSectionDataSource>)searchDataSource;
-(void)refresh;
-(void)setHostView:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<FBTagDecoratorDelegate>)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(id<FBTagDecoratorDelegate>)delegate;
-(BOOL)isEditable;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(void)setEditable:(BOOL)arg1 ;
@end
