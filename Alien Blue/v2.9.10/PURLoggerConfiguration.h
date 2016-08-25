/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PURLogStore, NSArray;

@interface PURLoggerConfiguration : NSObject {

	PURLogStore* _logStore;
	NSArray* _filterSettings;
	NSArray* _outputSettings;

}

@property (nonatomic,retain) PURLogStore * logStore;                //@synthesize logStore=_logStore - In the implementation block
@property (nonatomic,retain) NSArray * filterSettings;              //@synthesize filterSettings=_filterSettings - In the implementation block
@property (nonatomic,retain) NSArray * outputSettings;              //@synthesize outputSettings=_outputSettings - In the implementation block
+(id)defaultConfiguration;
-(PURLogStore *)logStore;
-(void)setLogStore:(PURLogStore *)arg1 ;
-(NSArray *)outputSettings;
-(void)setOutputSettings:(NSArray *)arg1 ;
-(void)setFilterSettings:(NSArray *)arg1 ;
-(NSArray *)filterSettings;
@end
