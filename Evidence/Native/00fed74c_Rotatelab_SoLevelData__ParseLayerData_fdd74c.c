/* IL2CPP: Rotatelab.SoLevelData$$ParseLayerData
void Rotatelab_SoLevelData__ParseLayerData (Rotatelab_SoLevelData_o* __this, Newtonsoft_Json_Linq_JArray_o* root, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x00fedbf4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SoLevelData$$ParseLayerData
   void Rotatelab_SoLevelData__ParseLayerData (Rotatelab_SoLevelData_o* __this,
   Newtonsoft_Json_Linq_JArray_o* root, const MethodInfo* method); */

void Rotatelab_SoLevelData__ParseLayerData_fdd74c(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uVar12;
  int **ppiVar13;
  int iStack_40;
  int *piStack_3c;
  int *piStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_00fedd18 + 0xfed768);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fedd1c + 0xfed77c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fedd20 + 0xfed788));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fedd24 + 0xfed794));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fedd28 + 0xfed7a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fedd2c + 0xfed7ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fedd30 + 0xfed7b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fedd34 + 0xfed7c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fedd38 + 0xfed7d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fedd3c + 0xfed7dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fedd40 + 0xfed7e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fedd44 + 0xfed7f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fedd48 + 0xfed800));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fedd4c + 0xfed80c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fedd50 + 0xfed818));
    *pcVar7 = '\x01';
  }
  uStack_2c = 0;
  iStack_30 = 0;
  iStack_34 = 0;
  piStack_38 = (int *)0x0;
  if (*(int *)(**(int **)(_UNK_00fedd54 + 0xfed830) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Pool_ListPool_object___Get_257b7b0
            (&iStack_40,&iStack_34,**(undefined4 **)(_UNK_00fedd58 + 0xfed860));
  iStack_30 = iStack_40;
  uStack_2c = piStack_3c;
  iStack_40 = 0;
  piStack_3c = &iStack_30;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piStack_38 = (int *)Newtonsoft_Json_Linq_JArray__GetEnumerator_2c988e0(param_2,0);
  ppiVar13 = &piStack_38;
  uVar12 = 0;
  piVar10 = *(int **)(_UNK_00fedd5c + 0xfed8c0);
  piVar11 = *(int **)(_UNK_00fedd60 + 0xfed8c8);
  do {
    piVar3 = piStack_38;
    if (piStack_38 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *piStack_38;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar10) {
          puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_00fed920;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piStack_38,*piVar10,0);
LAB_00fed920:
    iVar1 = (*(code *)*puVar2)(piVar3,puVar2[1],(code *)*puVar2,puVar2[1],uVar12,ppiVar13);
    piVar3 = piStack_38;
    if (iVar1 == 0) {
      if (piStack_38 == (int *)0x0) goto LAB_00fedbec;
      iVar1 = *piStack_38;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 == 0) goto LAB_00fedbc0;
      piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      break;
    }
    if (piStack_38 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *piStack_38;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_00fedd64 + 0xfed958)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_00fed9a0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piStack_38,**(int **)(_UNK_00fedd64 + 0xfed958),0);
LAB_00fed9a0:
    piVar3 = (int *)(*(code *)*puVar2)(piVar3,puVar2[1]);
    iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fedd68 + 0xfed9c0));
    Rotatelab_LayerData___ctor_1070db0(iVar1,0);
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = (**(code **)(*piVar3 + 0x130))
                      (piVar3,**(undefined4 **)(_UNK_00fedd6c + 0xfed9ec),
                       *(undefined4 *)(*piVar3 + 0x134));
    if (*(int *)(**(int **)(_UNK_00fedd70 + 0xfeda0c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar4 = Newtonsoft_Json_Linq_JToken__op_Explicit_2ca434c(uVar4,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iVar1 + 8) = uVar4;
    uVar4 = (**(code **)(*piVar3 + 0x130))
                      (piVar3,**(undefined4 **)(_UNK_00fedd74 + 0xfeda4c),
                       *(undefined4 *)(*piVar3 + 0x134));
    uVar4 = Rotatelab_SoLevelData__ParseColor_fe23a8(uVar4,uVar4,0);
    *(undefined4 *)(iVar1 + 0xc) = uVar4;
    piVar6 = (int *)(**(code **)(*piVar3 + 0x130))
                              (piVar3,**(undefined4 **)(_UNK_00fedd78 + 0xfeda7c),
                               *(undefined4 *)(*piVar3 + 0x134));
    piVar3 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar5 = (uint)*(byte *)(**(int **)(_UNK_00fedd7c + 0xfedaa4) + 0xb8);
      if ((*(byte *)(*piVar6 + 0xb8) < uVar5) ||
         (piVar3 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar5 * 4 + -4) != **(int **)(_UNK_00fedd7c + 0xfedaa4))
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28();
      }
    }
    uVar4 = Rotatelab_SoLevelData__ParseVoxelPositions_fe2468(param_1,piVar3);
    *(undefined4 *)(iVar1 + 0x10) = uVar4;
    thunk_FUN_00ec5080();
    if (iStack_34 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = *(int *)(iStack_34 + 8);
    uVar5 = *(uint *)(iStack_34 + 0xc);
    iVar9 = *piVar11;
    *(int *)(iStack_34 + 0x10) = *(int *)(iStack_34 + 0x10) + 1;
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar5 < *(uint *)(iVar8 + 0xc)) {
      *(uint *)(iStack_34 + 0xc) = uVar5 + 1;
      piVar3 = (int *)(iVar8 + uVar5 * 4 + 0x10);
      *piVar3 = iVar1;
      thunk_FUN_00ec5080(piVar3,iVar1);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iStack_34,iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
    }
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar10 = piVar10 + 2;
    if (uVar5 == 0) break;
    if (piVar10[-1] == **(int **)(_UNK_00fedd80 + 0xfedb94)) {
      puVar2 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
      goto LAB_00fedbdc;
    }
  }
LAB_00fedbc0:
  puVar2 = (undefined4 *)FUN_00efdb38(piStack_38,**(int **)(_UNK_00fedd80 + 0xfedb94),0);
LAB_00fedbdc:
  (*(code *)*puVar2)(piVar3,puVar2[1]);
LAB_00fedbec:
  if (iStack_34 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar12 = System_Collections_Generic_List_object___ToArray_267f7a0
                     (iStack_34,**(undefined4 **)(_UNK_00fedd84 + 0xfedc18));
  *(undefined4 *)(param_1 + 0x58) = uVar12;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x58));
  iVar1 = iStack_40;
  Rotatelab_Pool_PooledObject_object___Dispose_186ffc8
            (piStack_3c,**(undefined4 **)(_UNK_00fedd88 + 0xfedc40));
  if (iVar1 != 0) {
    FUN_00ec3a6c(iVar1);
  }
  return;
}

