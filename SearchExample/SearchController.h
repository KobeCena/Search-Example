//
//  SearchController.h
//  SearchExample
//
//  Created by C.P. Lim on 18/09/11.
//  Copyright 2011 C.P. Lim. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SESearchService.h"

@interface SearchController : UIViewController
{
    IBOutlet UITextField* whatField;
    IBOutlet UITextField* whereField;
    SESearchService* searchService;
}

-(IBAction)search:(id)sender;

@property (nonatomic, retain) IBOutlet UITextField* whatField;
@property (nonatomic, retain) IBOutlet UITextField* whereField;
@property (nonatomic, retain) SESearchService* searchService;

@end
