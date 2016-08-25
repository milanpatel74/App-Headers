/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECPostParametersService.h>

@class ECAPIConfiguration, NSString;

@interface ECAPIPostParametersService : NSObject <ECPostParametersService> {

	ECAPIConfiguration* _capiConfiguration;

}

@property (nonatomic,retain) ECAPIConfiguration * capiConfiguration;              //@synthesize capiConfiguration=_capiConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ECAPIConfiguration *)capiConfiguration;
-(void)fetchAttributesWithCategoryID:(id)arg1 withParameters:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithCAPIConfiguration:(id)arg1 ;
-(void)setCapiConfiguration:(ECAPIConfiguration *)arg1 ;
-(id)init;
@end
