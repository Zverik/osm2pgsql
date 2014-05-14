
#ifndef TAGTRANSFORM_H
#define TAGTRANSFORM_H

#include "output.hpp"
#include "taginfo.hpp"

#ifdef __cplusplus
extern "C" {
#endif


unsigned int tagtransform_filter_node_tags(struct keyval *tags, const export_list *exlist);
unsigned int tagtransform_filter_way_tags(struct keyval *tags, int * polygon, int * roads, const export_list *exlist);
unsigned int tagtransform_filter_rel_tags(struct keyval *tags, const export_list *exlist);
unsigned int tagtransform_filter_rel_member_tags(struct keyval *rel_tags, int member_count, struct keyval *member_tags,const char **member_role, int * member_superseeded, int * make_boundary, int * make_polygon, int * roads, const export_list *exlist);

int tagtransform_init(const struct output_options *options);
void tagtransform_shutdown();

#ifdef __cplusplus
}
#endif

#endif //TAGTRANSFORM_H
