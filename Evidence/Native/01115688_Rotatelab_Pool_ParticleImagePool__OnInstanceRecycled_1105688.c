/* IL2CPP: Rotatelab.Pool.ParticleImagePool$$OnInstanceRecycled
void Rotatelab_Pool_ParticleImagePool__OnInstanceRecycled (Rotatelab_Pool_ParticleImagePool_o* __this, Rotatelab_FX_ParticleImageController_o* instance, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.ParticleImagePool$$OnInstanceRecycled
   void Rotatelab_Pool_ParticleImagePool__OnInstanceRecycled (Rotatelab_Pool_ParticleImagePool_o*
   __this, Rotatelab_FX_ParticleImageController_o* instance, const MethodInfo* method); */

void Rotatelab_Pool_ParticleImagePool__OnInstanceRecycled_1105688(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  
  pcVar7 = (char *)(_UNK_01115704 + 0x11156a0);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01115708 + 0x11156b4));
    *pcVar7 = '\x01';
  }
  Rotatelab_Pool_ObjectPool_object___OnInstanceRecycled_1857d90
            (param_1,param_2,**(undefined4 **)(_UNK_0111570c + 0x11156cc));
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = AssetKits_ParticleImage_ParticleImage__get_main_2cce5f0(*(int *)(param_2 + 0x10),1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = 0x2f04;
  pcVar7 = (char *)(_UNK_02ce5824 + 0x2ce5654);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_02ce5828 + 0x2ce5668));
    FUN_00ec37c0(*(undefined4 *)(_UNK_02ce582c + 0x2ce5674));
    *pcVar7 = '\x01';
  }
  piVar8 = (int *)(iVar1 + 0x2f04);
  iVar2 = AssetKits_ParticleImage_ParticleImage__get_isMain_2cce7c8(iVar1);
  if (iVar2 != 0) {
    iVar5 = *(int *)(iVar1 + 0x84);
  }
  if ((iVar2 != 0 && iVar5 != 0) && (uVar4 = *(uint *)(iVar5 + 0xc), 0 < (int)uVar4)) {
    uVar6 = 0;
    do {
      if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar2 = *(int *)(iVar5 + 0x10 + uVar6 * 4);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      AssetKits_ParticleImage_ParticleImage__DoStop_2cd5634(iVar2,1);
      uVar4 = *(uint *)(iVar5 + 0xc);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)uVar4);
  }
  iVar5 = 0;
  *(undefined4 *)(iVar1 + 0x3008) = 0;
  *(undefined4 *)(iVar1 + 0x300c) = 0;
  *(undefined4 *)(iVar1 + 0x3010) = 0;
  puVar9 = *(undefined4 **)(_UNK_02ce5830 + 0x2ce56b8);
  while( true ) {
    if (*piVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*piVar8 + 0xc) <= iVar5) break;
    if (*piVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = System_Collections_Generic_List_object___get_Item_267d814(*piVar8,iVar5,*puVar9);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = iVar5 + 1;
    *(undefined1 *)(iVar2 + 0x10) = 0;
  }
  *(undefined2 *)(iVar1 + 0x2fcf) = 0x100;
  AssetKits_ParticleImage_ParticleImage__Clear_2cd02a0(iVar1);
  *(undefined1 *)(iVar1 + 0x2fce) = 0;
  if (*(char *)(iVar1 + 0x2fd1) != '\0') {
    *(undefined1 *)(iVar1 + 0x2fd1) = 0;
    *(undefined2 *)(iVar1 + 0x2fcf) = 0x100;
    AssetKits_ParticleImage_ParticleImage__Clear_2cd02a0(iVar1);
  }
  iVar5 = 0;
  while( true ) {
    if (*piVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*piVar8 + 0xc) <= iVar5) break;
    if (*piVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = System_Collections_Generic_List_object___get_Item_267d814(*piVar8,iVar5,*puVar9);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = iVar5 + 1;
    *(undefined1 *)(iVar2 + 0x10) = 0;
  }
  iVar5 = *(int *)(iVar1 + 0x2fe4);
  *(undefined1 *)(iVar1 + 0x3004) = 0;
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar7 = (char *)(_UNK_0362b3f8 + 0x362b270);
  if (*pcVar7 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362b3fc + 0x362b284),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362b400 + 0x362b290));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362b404 + 0x362b29c));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362b408 + 0x362b2a8));
    *pcVar7 = '\x01';
  }
  iVar1 = UnityEngine_Events_UnityEventBase__PrepareInvoke_361af00(iVar5);
  piVar8 = (int *)(iVar5 + 0x14);
  iVar5 = 0;
  puVar9 = *(undefined4 **)(_UNK_0362b40c + 0x362b2d0);
  piVar10 = *(int **)(_UNK_0362b410 + 0x362b2d8);
  puVar11 = *(undefined4 **)(_UNK_0362b414 + 0x362b2e0);
  do {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0xc) <= iVar5) {
      return;
    }
    piVar3 = (int *)System_Collections_Generic_List_object___get_Item_267d814(iVar1,iVar5,*puVar9);
    if (piVar3 == (int *)0x0) {
LAB_0362b338:
      piVar3 = (int *)System_Collections_Generic_List_object___get_Item_267d814(iVar1,iVar5,*puVar9)
      ;
      if (piVar3 != (int *)0x0) {
        iVar2 = *piVar10;
        uVar4 = (uint)*(byte *)(iVar2 + 0xb8);
        if ((uVar4 <= *(byte *)(*piVar3 + 0xb8)) &&
           (*(int *)(*(int *)(*piVar3 + 100) + uVar4 * 4 + -4) == iVar2)) goto LAB_0362b3e4;
      }
      piVar3 = (int *)System_Collections_Generic_List_object___get_Item_267d814(iVar1,iVar5,*puVar9)
      ;
      iVar2 = *piVar8;
      if (iVar2 == 0) {
        iVar2 = thunk_FUN_00ec388c(*puVar11,0);
        *piVar8 = iVar2;
        thunk_FUN_00ec5080(piVar8,iVar2);
        iVar2 = *piVar8;
      }
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(*piVar3 + 0xe0))(piVar3,iVar2,*(undefined4 *)(*piVar3 + 0xe4));
    }
    else {
      iVar2 = *piVar10;
      uVar4 = (uint)*(byte *)(iVar2 + 0xb8);
      if ((*(byte *)(*piVar3 + 0xb8) < uVar4) ||
         (*(int *)(*(int *)(*piVar3 + 100) + uVar4 * 4 + -4) != iVar2)) goto LAB_0362b338;
LAB_0362b3e4:
      UnityEngine_Events_InvokableCall__Invoke_3618f24();
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

