/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKStatefulViewComponentController.h>
#import <Facebook/FBComponentControllerWorkingRangeListening.h>
#import <Facebook/FBComponentControllerWorkingRangeListenerProviding.h>

@protocol FBCommentStreamCommentInlineReplyComposerComponentControllerDelegate;
@class FBCommentComposerViewController, NSString;

@interface FBCommentStreamCommentInlineReplyComposerComponentController : CKStatefulViewComponentController <FBComponentControllerWorkingRangeListening, FBComponentControllerWorkingRangeListenerProviding> {

	FBCommentComposerViewController* _commentComposerViewController;
	double _height;
	BOOL _hasUpdated;
	id<FBCommentStreamCommentInlineReplyComposerComponentControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newStatefulView:(id)arg1 ;
+(void)configureStatefulView:(id)arg1 forComponent:(id)arg2 ;
+(id)contextForNewStatefulView:(id)arg1 ;
-(void)didMount;
-(void)didUpdateComponent;
-(id)workingRangeListenerForComponent:(id)arg1 ;
-(void)componentEnteredVisibleRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2 ;
-(void)componentExitedVisibleRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2 ;
-(void)willMount;
-(void)didUnmount;
-(BOOL)canRelinquishStatefulView;
@end
