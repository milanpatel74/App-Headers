/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class AFAdUnitAppData, NSString;

@interface AFAdUnitActionData : NSObject {

	BOOL _allowCustomizationIfAppIsInstalled;
	AFAdUnitAppData* _appData;
	NSString* _callToActionTitle;
	NSString* _callToActionGetappsLink;
	NSString* _callToActionURLHandler;

}

@property (nonatomic,readonly) NSString * callToActionTitle;                    //@synthesize callToActionTitle=_callToActionTitle - In the implementation block
@property (nonatomic,readonly) NSString * callToActionGetappsLink;              //@synthesize callToActionGetappsLink=_callToActionGetappsLink - In the implementation block
@property (nonatomic,readonly) NSString * callToActionURLHandler;               //@synthesize callToActionURLHandler=_callToActionURLHandler - In the implementation block
-(NSString *)callToActionTitle;
-(NSString *)callToActionURLHandler;
-(id)initWithData:(id)arg1 appData:(id)arg2 ;
-(NSString *)callToActionGetappsLink;
@end
