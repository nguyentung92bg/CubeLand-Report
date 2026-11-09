/* IL2CPP: Rotatelab.Scripts.BlasterController$$CreateConnections
void Rotatelab_Scripts_BlasterController__CreateConnections (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$CreateConnections
   void Rotatelab_Scripts_BlasterController__CreateConnections
   (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__CreateConnections_1031d7c(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_01042080 + 0x1041d94);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01042084 + 0x1041da8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01042088 + 0x1041db4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104208c + 0x1041dc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01042090 + 0x1041dcc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01042094 + 0x1041dd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01042098 + 0x1041de4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104209c + 0x1041df0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010420a0 + 0x1041dfc));
    *pcVar7 = '\x01';
  }
  iVar11 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = *(int *)(*(int *)(param_1 + 0x18) + 0x34);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar8 + 0xc) <= iVar11) {
      return;
    }
    iVar8 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010420a4 + 0x1041e40));
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = *(int *)(*(int *)(param_1 + 0x18) + 0x34);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = System_Collections_Generic_List_object___get_Item_267d814
                      (iVar9,iVar11,**(undefined4 **)(_UNK_010420a8 + 0x1041e78));
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar2 = (int *)Rotatelab_Scripts_PlaceableManager__FindPlaceableByData_104306c(iVar8,uVar1,0);
    piVar5 = (int *)0x0;
    if (piVar2 != (int *)0x0) {
      uVar6 = (uint)*(byte *)(**(int **)(_UNK_010420ac + 0x1041eb8) + 0xb8);
      if ((*(byte *)(*piVar2 + 0xb8) < uVar6) ||
         (piVar5 = piVar2,
         *(int *)(*(int *)(*piVar2 + 100) + uVar6 * 4 + -4) != **(int **)(_UNK_010420ac + 0x1041eb8)
         )) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28();
      }
    }
    uVar1 = *(undefined4 *)(param_1 + 0x40);
    uVar10 = *(undefined4 *)(param_1 + 0x80);
    if (*(int *)(**(int **)(_UNK_010420b0 + 0x1041ef0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar8 = UnityEngine_Object__Instantiate_object__14d4e4c
                      (uVar10,uVar1,0,**(undefined4 **)(_UNK_010420b4 + 0x1041f1c));
    if (piVar5 == (int *)0x0) break;
    iVar3 = piVar5[0x10];
    iVar4 = piVar5[0x1f];
    iVar9 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                      (**(undefined4 **)(_UNK_010420b8 + 0x1041f44));
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_BlasterColorDataSo__GetConnectionColorByType_ff4c38
              (&uStack_34,iVar9,*(undefined4 *)(param_1 + 0x10c),*(char *)(param_1 + 0xc2) != '\0',0
              );
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_ConnectionController__Init_10320c0
              (iVar8,piVar5,iVar3,iVar4,uStack_34,uStack_30,uStack_2c,uStack_28,
               0 < *(int *)(param_1 + 0x94));
    iVar9 = *(int *)(param_1 + 0x118);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(iVar9 + 8);
    uVar6 = *(uint *)(iVar9 + 0xc);
    piVar5 = *(int **)(_UNK_010420bc + 0x1042018);
    *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar6 < *(uint *)(iVar3 + 0xc)) {
      *(uint *)(iVar9 + 0xc) = uVar6 + 1;
      piVar5 = (int *)(iVar3 + uVar6 * 4 + 0x10);
      *piVar5 = iVar8;
      thunk_FUN_00ec5080(piVar5,iVar8);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar9,iVar8,*(undefined4 *)(*(int *)(*(int *)(*piVar5 + 0x10) + 0x60) + 0x38));
    }
    iVar11 = iVar11 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

