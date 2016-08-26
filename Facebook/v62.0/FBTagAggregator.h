/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPhotoTagGuideTagletDelegate;
@class NSMutableArray, FBUserSession, FBPhotoTagGuideTaglet, FBTagContainerView, NSArray;

@interface FBTagAggregator : NSObject {

	double _minimumScale;
	double _maximumScale;
	NSMutableArray* _photoTaglets;
	FBUserSession* _session;
	id<FBPhotoTagGuideTagletDelegate> _delegate;
	double _scale;
	FBPhotoTagGuideTaglet* _tagGuideTaglet;
	FBTagContainerView* _view;
	NSArray* _tagletsCommitted;
	NSArray* _tagletsGenerated;

}

@property (nonatomic,retain) NSArray * tagletsCommitted;                                     //@synthesize tagletsCommitted=_tagletsCommitted - In the implementation block
@property (nonatomic,retain) NSArray * tagletsGenerated;                                     //@synthesize tagletsGenerated=_tagletsGenerated - In the implementation block
@property (assign,nonatomic,__weak) id<FBPhotoTagGuideTagletDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double scale;                                                   //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) BOOL dirty; 
@property (nonatomic,readonly) BOOL generated; 
@property (nonatomic,readonly) double minimumScale;                                          //@synthesize minimumScale=_minimumScale - In the implementation block
@property (nonatomic,readonly) double maximumScale;                                          //@synthesize maximumScale=_maximumScale - In the implementation block
@property (nonatomic,readonly) FBPhotoTagGuideTaglet * tagGuideTaglet;                       //@synthesize tagGuideTaglet=_tagGuideTaglet - In the implementation block
@property (nonatomic,retain) FBTagContainerView * view;                                      //@synthesize view=_view - In the implementation block
-(void)removeTaggable:(id)arg1 ;
-(void)addPhotoTaglet:(id)arg1 ;
-(void)removeAllTaggableEdges;
-(void)removeAllTaglets;
-(void)generateAggregatedTagletsWithMinimumScale:(double)arg1 maximumScale:(double)arg2 ;
-(void)commitWithAnimation:(unsigned long long)arg1 ;
-(id)findTagletByTaggbleEdge:(id)arg1 ;
-(void)setScale:(double)arg1 animated:(BOOL)arg2 ;
-(void)setTagletsGenerated:(NSArray *)arg1 ;
-(void)removeTagGuide;
-(void)setTagletsCommitted:(NSArray *)arg1 ;
-(void)_setScaleState;
-(void)addTaggableEdge:(id)arg1 ;
-(void)addTagGuideForFacebox:(id)arg1 ;
-(BOOL)generated;
-(void)adjustScaleWithMultiplier:(double)arg1 ;
-(FBPhotoTagGuideTaglet *)tagGuideTaglet;
-(NSArray *)tagletsCommitted;
-(NSArray *)tagletsGenerated;
-(void)setDelegate:(id<FBPhotoTagGuideTagletDelegate>)arg1 ;
-(id<FBPhotoTagGuideTagletDelegate>)delegate;
-(FBTagContainerView *)view;
-(void)setScale:(double)arg1 ;
-(void)setView:(FBTagContainerView *)arg1 ;
-(double)scale;
-(double)maximumScale;
-(double)minimumScale;
-(void)setDirty:(BOOL)arg1 ;
-(BOOL)dirty;
-(void)refresh;
-(id)initWithSession:(id)arg1 ;
@end
