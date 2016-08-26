/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface FBInspirationNUXModel : FBValueObject <NSCopying> {

	BOOL _shouldShowNUX;
	NSString* _title;
	NSString* _text;
	NSString* _buttonTitle;
	NSURL* _backgroundImageURL;
	long long _cameraPermissionState;

}

@property (nonatomic,copy,readonly) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                         //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonTitle;                  //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSURL * backgroundImageURL;              //@synthesize backgroundImageURL=_backgroundImageURL - In the implementation block
@property (nonatomic,readonly) long long cameraPermissionState;              //@synthesize cameraPermissionState=_cameraPermissionState - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowNUX;                           //@synthesize shouldShowNUX=_shouldShowNUX - In the implementation block
-(BOOL)shouldShowNUX;
-(id)initWithTitle:(id)arg1 text:(id)arg2 buttonTitle:(id)arg3 backgroundImageURL:(id)arg4 cameraPermissionState:(long long)arg5 shouldShowNUX:(BOOL)arg6 ;
-(long long)cameraPermissionState;
-(NSString *)title;
-(NSString *)text;
-(NSString *)buttonTitle;
-(NSURL *)backgroundImageURL;
@end
