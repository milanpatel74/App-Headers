/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SKPRemoteDebugLogger : NSObject
+(void)skp_addDocument:(id)arg1 toCollection:(id)arg2 ;
+(void)addDocument:(id)arg1 toCollection:(id)arg2 withUpdateKey:(id)arg3 ;
+(void)addDocument:(id)arg1 toCollection:(id)arg2 ;
+(id)sharedInstance;
-(void)addMutableDocument:(id)arg1 toCollection:(id)arg2 withUpdateKey:(id)arg3 ;
-(void)addMutableDocument:(id)arg1 toCollection:(id)arg2 ;
-(id)hardwareDescriptionForModel:(id)arg1 ;
-(id)registrationId;
-(void)postDocument:(id)arg1 ;
-(void)retryBuffer;
-(void)bufferDocument:(id)arg1 ;
-(BOOL)enabled;
@end
