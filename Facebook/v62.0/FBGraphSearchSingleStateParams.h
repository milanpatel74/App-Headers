/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:51 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSNumber, NSString;

@interface FBGraphSearchSingleStateParams : FBGraphQLInput {

	NSNumber* _singleStateFbid;
	NSString* _shareURLString;

}

@property (nonatomic,copy) NSNumber * singleStateFbid;              //@synthesize singleStateFbid=_singleStateFbid - In the implementation block
@property (nonatomic,copy) NSString * shareURLString;               //@synthesize shareURLString=_shareURLString - In the implementation block
-(NSString *)shareURLString;
-(void)setShareURLString:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)singleStateFbid;
-(void)setSingleStateFbid:(NSNumber *)arg1 ;
@end
