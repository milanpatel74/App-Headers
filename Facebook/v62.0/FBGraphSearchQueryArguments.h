/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:51 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSNumber, NSString, FBGraphSearchFilteredQueryArguments;

@interface FBGraphSearchQueryArguments : FBGraphQLInput {

	NSNumber* _graphQLID;
	NSString* _hashtag;
	NSString* _text;
	NSString* _bqf;
	FBGraphSearchFilteredQueryArguments* _filteredQueryArguments;

}

@property (nonatomic,copy) NSNumber * graphQLID;                                                      //@synthesize graphQLID=_graphQLID - In the implementation block
@property (nonatomic,copy) NSString * hashtag;                                                        //@synthesize hashtag=_hashtag - In the implementation block
@property (nonatomic,copy) NSString * text;                                                           //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * bqf;                                                            //@synthesize bqf=_bqf - In the implementation block
@property (nonatomic,copy) FBGraphSearchFilteredQueryArguments * filteredQueryArguments;              //@synthesize filteredQueryArguments=_filteredQueryArguments - In the implementation block
-(void)setGraphQLID:(NSNumber *)arg1 ;
-(NSNumber *)graphQLID;
-(void)setHashtag:(NSString *)arg1 ;
-(NSString *)hashtag;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)bqf;
-(void)setBqf:(NSString *)arg1 ;
-(FBGraphSearchFilteredQueryArguments *)filteredQueryArguments;
-(void)setFilteredQueryArguments:(FBGraphSearchFilteredQueryArguments *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
@end
