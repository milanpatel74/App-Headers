/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/GSDK_PBGeneratedMessage.h>

@class ACPStringFilter, ACPNumberFilter, NSString;

@interface ACPFilter : GSDK_PBGeneratedMessage

@property (assign,nonatomic) BOOL hasStringFilter; 
@property (nonatomic,retain) ACPStringFilter * stringFilter; 
@property (assign,nonatomic) BOOL hasNumberFilter; 
@property (nonatomic,retain) ACPNumberFilter * numberFilter; 
@property (assign,nonatomic) BOOL hasComplement; 
@property (assign,nonatomic) BOOL complement; 
@property (assign,nonatomic) BOOL hasParamName; 
@property (nonatomic,retain) NSString * paramName; 
+(id)descriptor;
@end
