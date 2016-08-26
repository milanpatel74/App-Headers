/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBPeopleDiscoveryActionBarButtonModel, FBMemPerson, UIColor;

@interface FBPeopleDiscoveryActionBarModel : FBValueObject <NSCopying> {

	double _width;
	FBPeopleDiscoveryActionBarButtonModel* _leftButtonModel;
	FBPeopleDiscoveryActionBarButtonModel* _centerButtonModel;
	FBPeopleDiscoveryActionBarButtonModel* _rightButtonModel;
	FBMemPerson* _targetPerson;
	UIColor* _primaryButtonTitleColor;
	UIColor* _primaryButtonBackgroundColor;

}

@property (nonatomic,readonly) double width;                                                                //@synthesize width=_width - In the implementation block
@property (nonatomic,copy,readonly) FBPeopleDiscoveryActionBarButtonModel * leftButtonModel;                //@synthesize leftButtonModel=_leftButtonModel - In the implementation block
@property (nonatomic,copy,readonly) FBPeopleDiscoveryActionBarButtonModel * centerButtonModel;              //@synthesize centerButtonModel=_centerButtonModel - In the implementation block
@property (nonatomic,copy,readonly) FBPeopleDiscoveryActionBarButtonModel * rightButtonModel;               //@synthesize rightButtonModel=_rightButtonModel - In the implementation block
@property (nonatomic,copy,readonly) FBMemPerson * targetPerson;                                             //@synthesize targetPerson=_targetPerson - In the implementation block
@property (nonatomic,copy,readonly) UIColor * primaryButtonTitleColor;                                      //@synthesize primaryButtonTitleColor=_primaryButtonTitleColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * primaryButtonBackgroundColor;                                 //@synthesize primaryButtonBackgroundColor=_primaryButtonBackgroundColor - In the implementation block
-(id)initWithWidth:(double)arg1 leftButtonModel:(id)arg2 centerButtonModel:(id)arg3 rightButtonModel:(id)arg4 targetPerson:(id)arg5 primaryButtonTitleColor:(id)arg6 primaryButtonBackgroundColor:(id)arg7 ;
-(FBPeopleDiscoveryActionBarButtonModel *)leftButtonModel;
-(FBPeopleDiscoveryActionBarButtonModel *)centerButtonModel;
-(UIColor *)primaryButtonTitleColor;
-(UIColor *)primaryButtonBackgroundColor;
-(FBPeopleDiscoveryActionBarButtonModel *)rightButtonModel;
-(FBMemPerson *)targetPerson;
-(double)width;
@end
