//
//  SearchControllerTest.h
//  SearchExample
//
//  Created by C.P. Lim on 20/09/11.
//  Copyright 2011 C.P. Lim. All rights reserved.
//

#import <GHUnitIOS/GHTestCase.h>
#import "SearchController.h"
#import "SESearchService.h"

@interface SearchControllerTest : GHTestCase
{
    SearchController* searchController;
    id mockSearchService;
}
-(void)testShouldDelegateToSearchServiceWhenSearchIsInvoked;
@end