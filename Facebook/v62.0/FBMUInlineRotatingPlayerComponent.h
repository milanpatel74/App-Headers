/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKStatefulViewComponent.h>

@class NSURL, FBUserSession;

@interface FBMUInlineRotatingPlayerComponent : CKStatefulViewComponent {

	NSURL* _imageURL;
	FBUserSession* _session;
	SEL _didEndDisplayingAction;
	SEL _didFinishPlayingSongAction;
	SEL _replaySongAction;

}

@property (nonatomic,readonly) NSURL * imageURL;                            //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                     //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) SEL didEndDisplayingAction;                  //@synthesize didEndDisplayingAction=_didEndDisplayingAction - In the implementation block
@property (nonatomic,readonly) SEL didFinishPlayingSongAction;              //@synthesize didFinishPlayingSongAction=_didFinishPlayingSongAction - In the implementation block
@property (nonatomic,readonly) SEL replaySongAction;                        //@synthesize replaySongAction=_replaySongAction - In the implementation block
+(id)newWithImageURL:(id)arg1 size:(const CKComponentSize*)arg2 didEndDisplayingAction:(SEL)arg3 didFinishPlayingSongAction:(SEL)arg4 replaySongAction:(SEL)arg5 userSession:(id)arg6 ;
-(SEL)replaySongAction;
-(SEL)didFinishPlayingSongAction;
-(SEL)didEndDisplayingAction;
-(NSURL *)imageURL;
-(FBUserSession *)session;
@end
