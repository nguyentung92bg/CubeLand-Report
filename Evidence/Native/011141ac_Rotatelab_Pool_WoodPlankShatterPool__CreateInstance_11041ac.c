/* IL2CPP: Rotatelab.Pool.WoodPlankShatterPool$$CreateInstance
UnityEngine_ParticleSystem_o* Rotatelab_Pool_WoodPlankShatterPool__CreateInstance (Rotatelab_Pool_WoodPlankShatterPool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.WoodPlankShatterPool$$CreateInstance
   UnityEngine_ParticleSystem_o* Rotatelab_Pool_WoodPlankShatterPool__CreateInstance
   (Rotatelab_Pool_WoodPlankShatterPool_o* __this, const MethodInfo* method); */

int Rotatelab_Pool_WoodPlankShatterPool__CreateInstance_11041ac(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar5 = (char *)(_UNK_01114604 + 0x11141cc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01114608 + 0x11141e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111460c + 0x11141ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01114610 + 0x11141f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01114614 + 0x1114204));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01114618 + 0x1114210));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111461c + 0x111421c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01114620 + 0x1114228));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01114624 + 0x1114234));
    *pcVar5 = '\x01';
  }
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_3c = 0;
  uVar7 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (*(int *)(**(int **)(_UNK_01114628 + 0x111426c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__Instantiate_object__14d4dd0
                    (uVar7,uVar1,**(undefined4 **)(_UNK_0111462c + 0x111428c));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_GameObject__get_transform_3601c90(iVar2,0);
  pcVar5 = (char *)(_UNK_01114630 + 0x11142c0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01114634 + 0x11142d4));
    *pcVar5 = '\x01';
  }
  puVar4 = *(undefined4 **)(**(int **)(_UNK_01114638 + 0x11142ec) + 0x5c);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localPosition_3613c6c(iVar3,*puVar4,puVar4[1],puVar4[2],0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_GameObject__get_transform_3601c90(iVar2,0);
  pcVar5 = (char *)(_UNK_0111463c + 0x1114340);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01114640 + 0x1114354));
    *pcVar5 = '\x01';
  }
  puVar4 = *(undefined4 **)(**(int **)(_UNK_01114644 + 0x111436c) + 0x5c);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localRotation_361507c(iVar3,*puVar4,puVar4[1],puVar4[2],puVar4[3],0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_GameObject__GetComponent_object__14905dc
                    (iVar2,**(undefined4 **)(_UNK_01114648 + 0x11143b0));
  iVar2 = UnityEngine_GameObject__GetComponentsInChildren_object__1491068
                    (iVar2,1,**(undefined4 **)(_UNK_01114650 + 0x11143f0));
  uVar8 = 0;
  while( true ) {
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar2 + 0xc) <= (int)uVar8) break;
    if (*(uint *)(iVar2 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar6 = *(int *)(iVar2 + 0x10 + uVar8 * 4);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_3c = UnityEngine_ParticleSystem__get_main_368ecf8(iVar6,0);
    UnityEngine_ParticleSystem_MainModule__set_simulationSpace_368f4a0(&uStack_3c,1,0);
    UnityEngine_ParticleSystem_MainModule__set_playOnAwake_368f4f4(&uStack_3c,0,0);
    uVar8 = uVar8 + 1;
  }
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_34 = UnityEngine_ParticleSystem__get_main_368ecf8(iVar3,0);
  UnityEngine_ParticleSystem_MainModule__set_stopAction_368f5e8(&uStack_34,3,0);
  iVar2 = UnityEngine_Component__get_gameObject_35fe360(iVar3,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_GameObject__AddComponent_object__1490548
                    (iVar2,**(undefined4 **)(_UNK_01114654 + 0x11144f0));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar2 + 0x10) = param_1;
  thunk_FUN_00ec5080((int *)(iVar2 + 0x10),param_1);
  *(int *)(iVar2 + 0x14) = iVar3;
  thunk_FUN_00ec5080((int *)(iVar2 + 0x14),iVar3);
  if (iVar3 != 0) {
    uStack_38 = UnityEngine_ParticleSystem__get_shape_368ed50(iVar3,0);
    iVar6 = *(int *)(param_1 + 0x28);
    iVar2 = UnityEngine_ParticleSystem_ShapeModule__get_enabled_368f8c8(&uStack_38,0);
    uVar1 = _UNK_01114600;
    if (iVar2 != 0) {
      uVar1 = UnityEngine_ParticleSystem_ShapeModule__get_radius_368f914(&uStack_38,0);
    }
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_Dictionary_object__float___set_Item_20709d4
              (iVar6,iVar3,uVar1,**(undefined4 **)(_UNK_01114658 + 0x1114594));
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = UnityEngine_Component__GetComponent_object__143f3b0
                      (iVar3,**(undefined4 **)(_UNK_0111465c + 0x11145b8));
    if (iVar2 != 0) {
      System_Collections_Generic_Dictionary_object__object___set_Item_2069314
                (iVar2,iVar3,uVar1,**(undefined4 **)(_UNK_01114660 + 0x11145e4));
      return iVar3;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

