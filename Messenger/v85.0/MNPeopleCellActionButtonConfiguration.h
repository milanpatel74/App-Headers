/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImage;

@interface MNPeopleCellActionButtonConfiguration : FBValueObject <NSCopying> {

	BOOL _actionButtonHasBorders;
	NSString* _actionButtonTitle;
	NSString* _actionButtonDisabledTitle;
	UIImage* _actionButtonImage;

}

@property (nonatomic,copy,readonly) NSString * actionButtonTitle;                      //@synthesize actionButtonTitle=_actionButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionButtonDisabledTitle;              //@synthesize actionButtonDisabledTitle=_actionButtonDisabledTitle - In the implementation block
@property (nonatomic,readonly) BOOL actionButtonHasBorders;                            //@synthesize actionButtonHasBorders=_actionButtonHasBorders - In the implementation block
@property (nonatomic,copy,readonly) UIImage * actionButtonImage;                       //@synthesize actionButtonImage=_actionButtonImage - In the implementation block
-(id)initWithActionButtonTitle:(id)arg1 actionButtonDisabledTitle:(id)arg2 actionButtonHasBorders:(BOOL)arg3 actionButtonImage:(id)arg4 ;
-(NSString *)actionButtonDisabledTitle;
-(BOOL)actionButtonHasBorders;
-(UIImage *)actionButtonImage;
-(NSString *)actionButtonTitle;
@end
