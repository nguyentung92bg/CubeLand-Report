/* IL2CPP: Rotatelab.Scripts.BlasterController.<>c$$<ShowSecondaryBlaster>b__161_0
void Rotatelab_Scripts_BlasterController___c___ShowSecondaryBlaster_b__161_0 (Rotatelab_Scripts_BlasterController___c_o* __this, Rotatelab_Scripts_BlasterController_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController.<>c$$<ShowSecondaryBlaster>b__161_0
   void Rotatelab_Scripts_BlasterController___c___ShowSecondaryBlaster_b__161_0
   (Rotatelab_Scripts_BlasterController___c_o* __this, Rotatelab_Scripts_BlasterController_o* this,
   const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController___c___ShowSecondaryBlaster_b__161_0_103988c
               (undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar3 = (char *)(_UNK_01049b08 + 0x10498a4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01049b0c + 0x10498b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01049b10 + 0x10498c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01049b14 + 0x10498d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01049b18 + 0x10498dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01049b1c + 0x10498e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01049b20 + 0x10498f4));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01049b24 + 0x1049910));
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_transform_35fe190(param_2,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_50,iVar2,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_BulletParticleManager__EmitDoubleColorReveal_ffac74
            (iVar1,uStack_50,uStack_4c,uStack_48,0);
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_BlasterController__UpdateBulletCount_1031a08(param_2);
  (**(code **)(*param_2 + 0x118))(param_2,*(undefined4 *)(*param_2 + 0x11c));
  if (param_2[0x46] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_38,param_2[0x46],**(undefined4 **)(_UNK_01049b28 + 0x10499e0));
  uStack_40 = 0;
  puVar4 = *(undefined4 **)(_UNK_01049b2c + 0x1049a04);
  puStack_3c = &uStack_38;
  while( true ) {
    iVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720(&uStack_38,*puVar4)
    ;
    iVar1 = iStack_2c;
    if (iVar2 == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_38,**(undefined4 **)(_UNK_01049b34 + 0x1049a98));
      return;
    }
    iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                      (**(undefined4 **)(_UNK_01049b30 + 0x1049a24));
    if (iVar2 == 0) break;
    Rotatelab_Scripts_BlasterColorDataSo__GetConnectionColorByType_ff4c38
              (&uStack_50,iVar2,param_2[0x43],0,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_ConnectionController__UpdateColor_1039740
              (iVar1,uStack_50,uStack_4c,uStack_48,uStack_44);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

