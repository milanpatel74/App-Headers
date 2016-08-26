/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponentController.h>
#import <Facebook/FBComponentControllerWorkingRangeListenerProviding.h>
#import <Facebook/FBComponentControllerWorkingRangeListening.h>

@class FBTimer, NSArray, FBInstantShoppingDocumentDownloader, FBVerveAdCoverMediaComponent, NSString;

@interface FBVerveAdCoverMediaComponentController : CKComponentController <FBComponentControllerWorkingRangeListenerProviding, FBComponentControllerWorkingRangeListening> {

	FBTimer* _previewTimer;
	BOOL _shouldFetchPreviews;
	BOOL _inWorkingRange;
	BOOL _showPreview;
	NSArray* _previewImages;
	FBInstantShoppingDocumentDownloader* _downloader;

}

@property (nonatomic,copy) NSArray * previewImages;                                         //@synthesize previewImages=_previewImages - In the implementation block
@property (assign,nonatomic) BOOL showPreview;                                              //@synthesize showPreview=_showPreview - In the implementation block
@property (nonatomic,retain) FBInstantShoppingDocumentDownloader * downloader;              //@synthesize downloader=_downloader - In the implementation block
@property (assign,nonatomic) BOOL inWorkingRange;                                           //@synthesize inWorkingRange=_inWorkingRange - In the implementation block
@property (nonatomic,readonly) FBVerveAdCoverMediaComponent * component; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toolbox;
-(void)didMount;
-(void)componentEnteredFocusedRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2 previousTransitions:(id)arg3 ;
-(void)componentExitedFocusedRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2 previousTransitions:(id)arg3 ;
-(void)didUpdateComponent;
-(id)workingRangeListenerForComponent:(id)arg1 ;
-(void)componentEnteredWorkingRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2 ;
-(void)componentExitedWorkingRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2 ;
-(void)fetchPreviews;
-(void)setShowPreview:(BOOL)arg1 ;
-(void)setPreviewImages:(NSArray *)arg1 ;
-(BOOL)inWorkingRange;
-(void)setInWorkingRange:(BOOL)arg1 ;
-(id)init;
-(BOOL)showPreview;
-(void)updateState;
-(NSArray *)previewImages;
-(FBInstantShoppingDocumentDownloader *)downloader;
-(void)setDownloader:(FBInstantShoppingDocumentDownloader *)arg1 ;
@end
