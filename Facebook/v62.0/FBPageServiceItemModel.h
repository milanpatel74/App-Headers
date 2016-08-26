/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBPageServiceItemModel : NSObject {

	BOOL _isServicesVisible;
	long long _type;
	id _modelContent;

}

@property (nonatomic,readonly) long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id modelContent;                     //@synthesize modelContent=_modelContent - In the implementation block
@property (nonatomic,readonly) BOOL isServicesVisible;              //@synthesize isServicesVisible=_isServicesVisible - In the implementation block
-(id)modelContent;
-(id)initWithModelType:(long long)arg1 model:(id)arg2 isServicesVisible:(BOOL)arg3 ;
-(BOOL)isServicesVisible;
-(long long)type;
@end
