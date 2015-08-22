/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBTaglet.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol FBPhotoTaggableEdgeProtocol;
@class UITapGestureRecognizer, NSString;

@interface FBPhotoTaglet : FBTaglet <UIGestureRecognizerDelegate> {

	UITapGestureRecognizer* _tapRecognizer;
	id<FBPhotoTaggableEdgeProtocol> _fbTaggableEdge;

}

@property (nonatomic,retain) id<FBPhotoTaggableEdgeProtocol> fbTaggableEdge;              //@synthesize fbTaggableEdge=_fbTaggableEdge - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tagTextForTaggableEdge:(id)arg1 ;
-(void)onTap:(id)arg1 ;
-(void)onTapNoDelete:(id)arg1 ;
-(void)setFbTaggableEdge:(id<FBPhotoTaggableEdgeProtocol>)arg1 ;
-(id<FBPhotoTaggableEdgeProtocol>)fbTaggableEdge;
-(id)initWithTaggableEdge:(id)arg1 showRemoveButton:(BOOL)arg2 delegate:(id)arg3 session:(id)arg4 ;
-(void)refresh;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
@end
