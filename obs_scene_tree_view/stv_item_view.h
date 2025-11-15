#ifndef STV_ITEM_VIEW_H
#define STV_ITEM_VIEW_H

#include <QtWidgets/QTreeView>

#include "obs_scene_tree_view/stv_item_model.h"

class StvItemView
        : public QTreeView
{
		Q_OBJECT

	public:
		StvItemView(QWidget *parent = nullptr);
		~StvItemView() override = default;

		void SetItemModel(StvItemModel *model);

	public slots:
		// Qt6: Changed from protected to public to allow modern signal/slot connections
		void EditSelectedItem();

	protected slots:
		void selectionChanged(const QItemSelection &selected, const QItemSelection &deselected) override;
		//bool edit(const QModelIndex &index, EditTrigger trigger, QEvent *event) override;

		void mouseDoubleClickEvent(QMouseEvent *event) override;

	private:
		StvItemModel *_model = nullptr;
};

#endif //STV_ITEM_VIEW_H
