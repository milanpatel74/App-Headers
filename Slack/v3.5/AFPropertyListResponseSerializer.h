/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <Slack/AFHTTPResponseSerializer.h>

@interface AFPropertyListResponseSerializer : AFHTTPResponseSerializer {

	unsigned long long _format;
	unsigned long long _readOptions;

}

@property (assign,nonatomic) unsigned long long format;                   //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) unsigned long long readOptions;              //@synthesize readOptions=_readOptions - In the implementation block
+(id)serializerWithFormat:(unsigned long long)arg1 readOptions:(unsigned long long)arg2 ;
+(id)serializer;
-(id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(void)setReadOptions:(unsigned long long)arg1 ;
-(unsigned long long)readOptions;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)format;
-(void)setFormat:(unsigned long long)arg1 ;
@end
