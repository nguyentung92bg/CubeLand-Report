/* IL2CPP: Rotatelab.Scripts.ObjectManager$$BreakVoxelsByPropeller
void Rotatelab_Scripts_ObjectManager__BreakVoxelsByPropeller (Rotatelab_Scripts_ObjectManager_o* __this, Rotatelab_Scripts_VoxelController_o* targetVoxel, System_Collections_Generic_List_VoxelController__o* voxelsToBreak, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ObjectManager$$BreakVoxelsByPropeller
   void Rotatelab_Scripts_ObjectManager__BreakVoxelsByPropeller (Rotatelab_Scripts_ObjectManager_o*
   __this, Rotatelab_Scripts_VoxelController_o* targetVoxel,
   System_Collections_Generic_List_VoxelController__o* voxelsToBreak, const MethodInfo* method); */

void Rotatelab_Scripts_ObjectManager__BreakVoxelsByPropeller_102f018
               (int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined1 auStack_24 [12];
  
  pcVar4 = (char *)(_UNK_0103f21c + 0x103f038);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103f220 + 0x103f04c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103f224 + 0x103f058));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103f228 + 0x103f064));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103f22c + 0x103f070));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x7c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___Remove_267f138
            (*(int *)(param_1 + 0x7c),param_2,**(undefined4 **)(_UNK_0103f230 + 0x103f098));
  uVar3 = *(undefined4 *)(param_1 + 0x50);
  if (*(int *)(**(int **)(_UNK_0103f234 + 0x103f0ac) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Equality_36033f4(uVar3,0,0);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (param_3 != 0) {
      iVar1 = *(int *)(param_3 + 0xc);
    }
    if (param_3 != 0 && iVar1 != 0) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = UnityEngine_Component__get_transform_35fe190(param_2,0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__get_position_36149b0(auStack_24,iVar1,0);
      puVar5 = *(undefined4 **)(_UNK_0103f238 + 0x103f134);
      iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                        (param_3,*(int *)(param_3 + 0xc) + -1,*puVar5);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = UnityEngine_Component__get_transform_35fe190(iVar1,0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__get_position_36149b0(auStack_24,iVar1,0);
      pcVar4 = (char *)(_UNK_0103f23c + 0x103f18c);
      if (*pcVar4 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0103f240 + 0x103f1a0));
        *pcVar4 = '\x01';
      }
      if (*(int *)(**(int **)(_UNK_0103f244 + 0x103f1b4) + 0x74) == 0) {
        FUN_00ec3934();
      }
      if (0 < *(int *)(param_3 + 0xc)) {
        iVar1 = 0;
        do {
          piVar2 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                                    (param_3,iVar1,*puVar5);
          if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          (**(code **)(*piVar2 + 0x118))(piVar2,*(undefined4 *)(*piVar2 + 0x11c));
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(param_3 + 0xc));
      }
    }
  }
  return;
}

