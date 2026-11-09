/* IL2CPP: Rotatelab.Scripts.ObjectManager$$GetClosestWall
Rotatelab_Scripts_WallController_o* Rotatelab_Scripts_ObjectManager__GetClosestWall (Rotatelab_Scripts_ObjectManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ObjectManager$$GetClosestWall
   Rotatelab_Scripts_WallController_o* Rotatelab_Scripts_ObjectManager__GetClosestWall
   (Rotatelab_Scripts_ObjectManager_o* __this, const MethodInfo* method); */

int Rotatelab_Scripts_ObjectManager__GetClosestWall_102d958(int param_1)

{
  undefined8 uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  
  pcVar5 = (char *)(_UNK_0103db28 + 0x103d978);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103db2c + 0x103d98c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103db30 + 0x103d998));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103db34 + 0x103d9a4));
    *pcVar5 = '\x01';
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_50,*(int *)(param_1 + 0x4c),0);
  fVar2 = fStack_48;
  uVar1 = CONCAT44(uStack_4c,uStack_50);
  iVar6 = 0;
  puVar7 = *(undefined4 **)(_UNK_0103db38 + 0x103d9f0);
  iStack_54 = 0;
  fVar9 = _UNK_0103db24;
  while( true ) {
    if (*(int *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x60) + 0xc) <= iVar6) {
      return iStack_54;
    }
    if (*(int *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x60),iVar6,*puVar7);
    if (iVar3 == 0) break;
    if (*(char *)(iVar3 + 0x1c) == '\0') {
      iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_0103db3c + 0x103da54));
      Rotatelab_Scripts_WallController__get_Position_105e270(&uStack_50,iVar3,0);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = Rotatelab_Grid_GridManager__GetGridCell_1106d80(iVar4,uStack_50,uStack_4c,fStack_48,0)
      ;
      if (*(char *)(iVar4 + 8) != '\0') {
        iVar4 = UnityEngine_Component__get_transform_35fe190(iVar3,0);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__get_position_36149b0(&uStack_50,iVar4,0);
        uVar10 = FloatVectorSub(CONCAT44(uStack_4c,uStack_50),uVar1,2,0x20);
        uVar10 = FloatVectorMult(uVar10,uVar10,2,0x20);
        fVar8 = (float)uVar10 + (float)((ulonglong)uVar10 >> 0x20) +
                (fStack_48 - fVar2) * (fStack_48 - fVar2);
        if (fVar8 < fVar9) {
          fVar9 = fVar8;
          iStack_54 = iVar3;
        }
      }
    }
    iVar6 = iVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

