/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBVideoUploadResolution : NSObject {

	unsigned _quality;
	unsigned long long _criteria;

}

@property (nonatomic,readonly) unsigned quality;                         //@synthesize quality=_quality - In the implementation block
@property (nonatomic,readonly) unsigned long long criteria;              //@synthesize criteria=_criteria - In the implementation block
-(id)initWithQuality:(unsigned)arg1 qualityCriteria:(unsigned long long)arg2 ;
-(unsigned)quality;
-(unsigned long long)criteria;
-(id)criteriaString;
@end
