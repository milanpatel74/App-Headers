/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/GSDK_PBGeneratedMessage.h>

@class GSDK_PBMutableArray;

@interface GGL_CLEARCUTActiveExperiments : GSDK_PBGeneratedMessage

@property (assign,nonatomic) BOOL hasClientAlteringExperimentArray; 
@property (nonatomic,retain) GSDK_PBMutableArray * clientAlteringExperimentArray; 
@property (assign,nonatomic) BOOL hasOtherExperimentArray; 
@property (nonatomic,retain) GSDK_PBMutableArray * otherExperimentArray; 
@property (assign,nonatomic) BOOL hasGwsExperimentArray; 
@property (nonatomic,retain) GSDK_PBMutableArray * gwsExperimentArray; 
@property (assign,nonatomic) BOOL hasPlayExperimentArray; 
@property (nonatomic,retain) GSDK_PBMutableArray * playExperimentArray; 
@property (assign,nonatomic) BOOL hasUnsupportedPlayExperimentArray; 
@property (nonatomic,retain) GSDK_PBMutableArray * unsupportedPlayExperimentArray; 
+(id)descriptor;
@end
