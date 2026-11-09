/* IL2CPP: Rotatelab.Grid.GridManager$$TryGetGridCellContent<object>
bool Rotatelab_Grid_GridManager__TryGetGridCellContent_object_ (Rotatelab_Grid_GridManager_o* __this, UnityEngine_Vector3Int_o position, Il2CppObject** obj, const MethodInfo_1492BBC* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Grid.GridManager$$TryGetGridCellContent<object>
   bool Rotatelab_Grid_GridManager__TryGetGridCellContent_object_ (Rotatelab_Grid_GridManager_o*
   __this, UnityEngine_Vector3Int_o position, Il2CppObject** obj, const MethodInfo_1492BBC* method);
    */

bool Rotatelab_Grid_GridManager__TryGetGridCellContent_object__1492bbc
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               int *param_5,int param_6)

{
  int iVar1;
  
  iVar1 = *(int *)(param_6 + 0x1c);
  if (iVar1 == 0) {
    FUN_00efd7c4(param_6);
    iVar1 = *(int *)(param_6 + 0x1c);
  }
  iVar1 = Rotatelab_Grid_GridManager__GetGridCellContent_object__1492b18
                    (param_1,param_2,param_3,param_4,*(undefined4 *)(iVar1 + 4));
  *param_5 = iVar1;
  thunk_FUN_00ec5080(param_5,iVar1);
  return *param_5 != 0;
}

