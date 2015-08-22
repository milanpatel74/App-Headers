/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:01 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class NSString, NSAttributedString, NSURL;

@interface MNPermissionRequestViewModel : FBValueObject <NSCopying> {

	NSString* _title;
	NSString* _subtitle;
	NSString* _buttonTitle;
	NSAttributedString* _footerText;
	NSURL* _footerURL;

}

@property (nonatomic,copy,readonly) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonTitle;                       //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * footerText;              //@synthesize footerText=_footerText - In the implementation block
@property (nonatomic,copy,readonly) NSURL * footerURL;                            //@synthesize footerURL=_footerURL - In the implementation block
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 buttonTitle:(id)arg3 footerText:(id)arg4 footerURL:(id)arg5 ;
-(NSURL *)footerURL;
-(NSString *)title;
-(NSString *)subtitle;
-(NSString *)buttonTitle;
-(NSAttributedString *)footerText;
@end
