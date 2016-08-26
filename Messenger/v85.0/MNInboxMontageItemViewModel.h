/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNInboxMontageItemContent, NSString, UIColor, MNInboxImpressionLoggingData;

@interface MNInboxMontageItemViewModel : FBValueObject <NSCopying> {

	BOOL _isViewerMontage;
	MNInboxMontageItemContent* _content;
	NSString* _name;
	NSString* _timestamp;
	UIColor* _maskColor;
	MNInboxImpressionLoggingData* _loggingData;

}

@property (nonatomic,copy,readonly) MNInboxMontageItemContent * content;                     //@synthesize content=_content - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * timestamp;                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) UIColor * maskColor;                                     //@synthesize maskColor=_maskColor - In the implementation block
@property (nonatomic,copy,readonly) MNInboxImpressionLoggingData * loggingData;              //@synthesize loggingData=_loggingData - In the implementation block
@property (nonatomic,readonly) BOOL isViewerMontage;                                         //@synthesize isViewerMontage=_isViewerMontage - In the implementation block
-(MNInboxImpressionLoggingData *)loggingData;
-(BOOL)isViewerMontage;
-(id)initWithContent:(id)arg1 name:(id)arg2 timestamp:(id)arg3 maskColor:(id)arg4 loggingData:(id)arg5 isViewerMontage:(BOOL)arg6 ;
-(NSString *)timestamp;
-(NSString *)name;
-(MNInboxMontageItemContent *)content;
-(UIColor *)maskColor;
@end
